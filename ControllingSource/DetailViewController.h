//
//  DetailViewController.h
//  ControllingSource
//
//  Created by Kelley Levy on 2/5/14.
//  Copyright (c) 2014 Kelley Levy. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
