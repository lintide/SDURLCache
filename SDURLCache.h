//
//  SDURLCache.h
//  SDURLCache
//
//  Created by Olivier Poitrey on 15/03/10.
//  Copyright 2010 Dailymotion. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface SDURLCache : NSURLCache
{
    @private
    NSString *diskCachePath;
    NSMutableDictionary *diskCacheInfo;
    NSUInteger diskCacheUsage;
    NSTimeInterval minCacheInterval;
    NSOperationQueue *cacheInQueue;
}

/*
 * Defines the minimum number of seconds between now and the expiration time of a cacheable response
 * in order for the response to be cached on disk. This prevent from spending time and storage capacity
 * for an entry which will certainly expire before behing read back from disk cache (memory cache is
 * best suited for short term cache). The default value is set to 5 minutes (300 seconds).
 */
@property (nonatomic, assign) NSTimeInterval minCacheInterval;

@end
