//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MDViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class MBProgressHUD, MDDiscussProfile, NSMutableArray, NSString, UIAlertView, UIEXTableViewCellSwitch, UITableView;

@interface DiscussSettingViewController : MDViewController <UITableViewDataSource, UITableViewDelegate>
{
    UITableView *_myTableView;
    MBProgressHUD *hud;
    MDDiscussProfile *discussInfo;
    _Bool currentUserIsOwner;
    UIAlertView *alertViewReference;
    NSMutableArray *_cellGroups;
    UIEXTableViewCellSwitch *_chatTopCell;
}

@property(retain, nonatomic) UIEXTableViewCellSwitch *chatTopCell; // @synthesize chatTopCell=_chatTopCell;
@property(retain, nonatomic) NSMutableArray *cellGroups; // @synthesize cellGroups=_cellGroups;
@property(retain, nonatomic) UIAlertView *alertViewReference; // @synthesize alertViewReference;
@property(retain, nonatomic) MDDiscussProfile *discussInfo; // @synthesize discussInfo;
@property(retain, nonatomic) UITableView *myTableView; // @synthesize myTableView=_myTableView;
- (void)changePushStatus:(id)arg1;
- (void)requestDidFail:(id)arg1;
- (void)requestDidError:(id)arg1;
- (void)dismissDiscussDidSuccess:(id)arg1;
- (void)didDismissOrQuitDiscussion:(_Bool)arg1 andResponse:(id)arg2;
- (void)requestDidSuccess:(id)arg1;
- (void)backToEarlierController;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)showAlertView;
- (void)pushToMessagePushSettingController;
- (id)pushSettingCell;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)removeHud;
- (void)showHud;
- (void)didReceiveMemoryWarning;
- (void)setMultiChatTopStateError:(id)arg1;
- (void)setMultiChatTopStateFail:(id)arg1;
- (void)setMultiChatTopStateSuccess:(id)arg1;
- (void)setChatTop:(id)arg1;
- (void)setupCellModeChatTop;
- (void)setupCellModelGroup0;
- (void)setupCellGroups;
- (void)forceRefreshUI;
- (void)viewDidLoad;
- (void)addDismissBtn;
- (void)setupNavBar;
- (void)backAction;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)dealloc;
- (id)initWithDiscussProfile:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
