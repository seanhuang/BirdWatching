//
//  BirdsDetailViewController.h
//  BirdWatching
//
//  Created by seanhuang on 12-10-2.
//  Copyright (c) 2012年 seanhuang. All rights reserved.
//

#import <UIKit/UIKit.h>
@class BirdSighting;

// 也是 UITableViewController
@interface BirdsDetailViewController : UITableViewController

@property (strong, nonatomic) BirdSighting *sighting;
@property (weak, nonatomic) IBOutlet UILabel *birdNameLabel;
@property (weak, nonatomic) IBOutlet UILabel *locationLabel;
@property (weak, nonatomic) IBOutlet UILabel *dateLabel;

// @property (strong, nonatomic) id detailItem;
// @property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
