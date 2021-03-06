/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:21 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/HashtagImages.app/PlugIns/HashtagImagesExtension.appex/HashtagImagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messages/MSMessagesAppViewController.h>
#import <HashtagImagesExtension/STSPickerSelectionDelegate.h>
#import <HashtagImagesExtension/STSSearchBrowserRootViewControllerDelegate.h>
#import <libobjc.A.dylib/PARSessionDelegate.h>

@class MSConversation, STSPicker, STSZKWBrowserHeaderView, STSSearchBrowserRootViewController, STSSearchModel, STSRootView, NSString;

@interface STSMessagesAppViewController : MSMessagesAppViewController <STSPickerSelectionDelegate, STSSearchBrowserRootViewControllerDelegate, PARSessionDelegate> {

	MSConversation* _currentConversation;
	STSPicker* _zkwPicker;
	STSZKWBrowserHeaderView* _zkwHeaderView;
	STSSearchBrowserRootViewController* _searchBrowserRootViewController;
	STSSearchModel* _zkwSearchModel;
	/*^block*/id _requestExpandedCompletion;
	/*^block*/id _engagementFeedbackBlock;

}

@property (nonatomic,retain) STSRootView * view; 
@property (nonatomic,copy) id requestExpandedCompletion;              //@synthesize requestExpandedCompletion=_requestExpandedCompletion - In the implementation block
@property (nonatomic,copy) id engagementFeedbackBlock;                //@synthesize engagementFeedbackBlock=_engagementFeedbackBlock - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)requestExpandedPresentationStyleForBrowser:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)searchBrowserRootViewControllerDidSelectCancel:(id)arg1 ;
-(void)_updatePickerBottomInset;
-(void)setEngagementFeedbackBlock:(id)arg1 ;
-(id)requestExpandedCompletion;
-(void)setRequestExpandedCompletion:(id)arg1 ;
-(void)_transitionContentFromViewController:(id)arg1 toViewController:(id)arg2 animated:(char)arg3 completion:(/*^block*/id)arg4 ;
-(id)engagementFeedbackBlock;
-(void)browser:(id)arg1 didSelectProviderLink:(id)arg2 ;
-(void)browser:(id)arg1 didSelectResult:(id)arg2 withPayload:(id)arg3 ;
-(void)browserSearchBarButtonClicked:(id)arg1 ;
-(void)browserSuggestionButtonClicked:(id)arg1 suggestion:(id)arg2 ;
-(char)browserIsPresentedFullscreen:(id)arg1 ;
-(void)browserDidTapLogo:(id)arg1 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)session:(id)arg1 bag:(id)arg2 didLoadWithError:(id)arg3 ;
-(void)_setup;
-(void)willBecomeActiveWithConversation:(id)arg1 ;
-(void)willResignActiveWithConversation:(id)arg1 ;
-(void)willTransitionToPresentationStyle:(unsigned)arg1 ;
-(void)didTransitionToPresentationStyle:(unsigned)arg1 ;
-(void)updateSnapshotWithCompletionBlock:(/*^block*/id)arg1 ;
@end

