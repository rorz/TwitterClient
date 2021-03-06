//
//  AccountsListViewController.h
//  TwitterClient
//
//  Created by Peter Friese on 19.09.11.
//  Copyright (c) 2011 itemis. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Accounts/Accounts.h>

@interface AccountsListViewController : UITableViewController

@property (strong, nonatomic) ACAccountStore *accountStore; 
@property (strong, nonatomic) NSArray *accounts;

@end
