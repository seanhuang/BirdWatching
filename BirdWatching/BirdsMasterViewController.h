//
//  BirdsMasterViewController.h
//  BirdWatching
//
//  Created by seanhuang on 12-10-2.
//  Copyright (c) 2012年 seanhuang. All rights reserved.
//

#import <UIKit/UIKit.h>
@class BirdSightingDataController;

@interface BirdsMasterViewController : UITableViewController
@property (strong, nonatomic) BirdSightingDataController *dataController;

@end
