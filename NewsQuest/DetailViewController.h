//
//  DetailViewController.h
//  NewsQuest
//
//  Created by jquinn11 on 2/12/13.
//  Copyright (c) 2013 Mobile Application Projects. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
