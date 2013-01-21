//
//  BirdSightingDataController.h
//  BirdWatching
//
//  Created by seanhuang on 12-10-2.
//  Copyright (c) 2012年 seanhuang. All rights reserved.
//

#import <Foundation/Foundation.h>
//#import "BirdSighting.h"
@class BirdSighting;

@interface BirdSightingDataController : NSObject
@property (nonatomic, copy) NSMutableArray *masterBirdSightingList;

- (NSUInteger)countOfList;
- (BirdSighting *)objectInListAtIndex:(NSUInteger)theIndex;
- (void)addBirdSightingWithName:(NSString *)inputBirdName location:(NSString *)inputLocation;

@end
