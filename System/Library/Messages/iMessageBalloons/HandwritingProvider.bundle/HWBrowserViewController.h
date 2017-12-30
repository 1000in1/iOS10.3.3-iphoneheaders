/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 6:38:15 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Messages/iMessageBalloons/HandwritingProvider.bundle/HandwritingProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HandwritingProvider/HandwritingProvider-Structs.h>
#import <ChatKit/CKBrowserViewController.h>
#import <HandwritingProvider/HWScrollViewDelegate.h>
#import <HandwritingProvider/HWFavoritesPickerDelegate.h>
#import <HandwritingProvider/CKHandwritingBrowserViewControllerProtocol.h>

@class CKBrowserItemPayload, UIView, UIStackView, NSLayoutConstraint, HWPreviewBubbleView, HWRepeatingButton, UIButton, HWFavoritesPickerView, UILabel, DKInkView, HWScrollView, HWHandwritingItem, NSString, UIViewController, IMBalloonPlugin, IMBalloonPluginDataSource, CKBrowserDragManager, NSNumber;

@interface HWBrowserViewController : CKBrowserViewController <HWScrollViewDelegate, HWFavoritesPickerDelegate, CKHandwritingBrowserViewControllerProtocol> {

	CKBrowserItemPayload* _resumablePayload;
	CKBrowserItemPayload* _resumablePayloadToLoad;
	char _hasSwipeTextBeenShown;
	char _hasSwipeDefaultBeenLoaded;
	char _canvasNeedsRepositioning;
	UIView* _backgroundView;
	UIStackView* _topStackView;
	UIView* _bottomView;
	UIStackView* _bottomStackView;
	NSLayoutConstraint* _bottomViewHeightConstraint;
	NSLayoutConstraint* _scrollViewCenterYConstraint;
	NSLayoutConstraint* _topStackViewHeightConstraint;
	NSLayoutConstraint* _topStackViewToSuperViewTopConstraint;
	NSLayoutConstraint* _topStackViewTopToTopScrollViewConstraint;
	NSLayoutConstraint* _topStackViewBottomToTopScrollViewConstraint;
	NSLayoutConstraint* _bottomStackViewToSuperViewBottomConstraint;
	NSLayoutConstraint* _bottomStackViewBottomToBottomScrollViewConstraint;
	NSLayoutConstraint* _bottomStackViewTopToBottomScrollViewConstraint;
	UIView* _handwritingPreviewContainer;
	HWPreviewBubbleView* _handwritingPreviewBubble;
	HWRepeatingButton* _undoButton;
	UIButton* _clearButton;
	UIButton* _doneButton;
	UIButton* _keyboardButton;
	UIButton* _inputMethodPickerButton;
	UIButton* _recentsButton;
	HWFavoritesPickerView* _recentsPicker;
	UILabel* _swipeInstructionLabel;
	UILabel* _roateInstructionLabel;
	UIView* _advancePageRightButton;
	UIView* _advancePageLeftButton;
	DKInkView* _canvasView;
	HWScrollView* _handwritingScrollView;
	UIView* _handwritingContainerView;
	HWHandwritingItem* _currentHandwritingItem;
	CGSize _currentLayoutSize;

}

@property (nonatomic,retain) UIView * backgroundView;                                                                     //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,retain) UIStackView * topStackView;                                                                  //@synthesize topStackView=_topStackView - In the implementation block
@property (nonatomic,retain) UIView * bottomView;                                                                         //@synthesize bottomView=_bottomView - In the implementation block
@property (nonatomic,retain) UIStackView * bottomStackView;                                                               //@synthesize bottomStackView=_bottomStackView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * bottomViewHeightConstraint;                                             //@synthesize bottomViewHeightConstraint=_bottomViewHeightConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * scrollViewCenterYConstraint;                                            //@synthesize scrollViewCenterYConstraint=_scrollViewCenterYConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * topStackViewHeightConstraint;                                           //@synthesize topStackViewHeightConstraint=_topStackViewHeightConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * topStackViewToSuperViewTopConstraint;                                   //@synthesize topStackViewToSuperViewTopConstraint=_topStackViewToSuperViewTopConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * topStackViewTopToTopScrollViewConstraint;                               //@synthesize topStackViewTopToTopScrollViewConstraint=_topStackViewTopToTopScrollViewConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * topStackViewBottomToTopScrollViewConstraint;                            //@synthesize topStackViewBottomToTopScrollViewConstraint=_topStackViewBottomToTopScrollViewConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * bottomStackViewToSuperViewBottomConstraint;                             //@synthesize bottomStackViewToSuperViewBottomConstraint=_bottomStackViewToSuperViewBottomConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * bottomStackViewBottomToBottomScrollViewConstraint;                      //@synthesize bottomStackViewBottomToBottomScrollViewConstraint=_bottomStackViewBottomToBottomScrollViewConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * bottomStackViewTopToBottomScrollViewConstraint;                         //@synthesize bottomStackViewTopToBottomScrollViewConstraint=_bottomStackViewTopToBottomScrollViewConstraint - In the implementation block
@property (nonatomic,retain) UIView * handwritingPreviewContainer;                                                        //@synthesize handwritingPreviewContainer=_handwritingPreviewContainer - In the implementation block
@property (nonatomic,retain) HWPreviewBubbleView * handwritingPreviewBubble;                                              //@synthesize handwritingPreviewBubble=_handwritingPreviewBubble - In the implementation block
@property (nonatomic,retain) HWRepeatingButton * undoButton;                                                              //@synthesize undoButton=_undoButton - In the implementation block
@property (nonatomic,retain) UIButton * clearButton;                                                                      //@synthesize clearButton=_clearButton - In the implementation block
@property (nonatomic,retain) UIButton * doneButton;                                                                       //@synthesize doneButton=_doneButton - In the implementation block
@property (nonatomic,retain) UIButton * keyboardButton;                                                                   //@synthesize keyboardButton=_keyboardButton - In the implementation block
@property (nonatomic,retain) UIButton * inputMethodPickerButton;                                                          //@synthesize inputMethodPickerButton=_inputMethodPickerButton - In the implementation block
@property (nonatomic,retain) UIButton * recentsButton;                                                                    //@synthesize recentsButton=_recentsButton - In the implementation block
@property (nonatomic,retain) HWFavoritesPickerView * recentsPicker;                                                       //@synthesize recentsPicker=_recentsPicker - In the implementation block
@property (nonatomic,retain) UILabel * swipeInstructionLabel;                                                             //@synthesize swipeInstructionLabel=_swipeInstructionLabel - In the implementation block
@property (nonatomic,retain) UILabel * roateInstructionLabel;                                                             //@synthesize roateInstructionLabel=_roateInstructionLabel - In the implementation block
@property (nonatomic,retain) UIView * advancePageRightButton;                                                             //@synthesize advancePageRightButton=_advancePageRightButton - In the implementation block
@property (nonatomic,retain) UIView * advancePageLeftButton;                                                              //@synthesize advancePageLeftButton=_advancePageLeftButton - In the implementation block
@property (nonatomic,retain) DKInkView * canvasView;                                                                      //@synthesize canvasView=_canvasView - In the implementation block
@property (nonatomic,retain) HWScrollView * handwritingScrollView;                                                        //@synthesize handwritingScrollView=_handwritingScrollView - In the implementation block
@property (nonatomic,retain) UIView * handwritingContainerView;                                                           //@synthesize handwritingContainerView=_handwritingContainerView - In the implementation block
@property (nonatomic,retain) HWHandwritingItem * currentHandwritingItem;                                                  //@synthesize currentHandwritingItem=_currentHandwritingItem - In the implementation block
@property (assign,nonatomic) CGSize currentLayoutSize;                                                                    //@synthesize currentLayoutSize=_currentLayoutSize - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) UIViewController * presentationViewController; 
@property (assign,nonatomic,__weak) NSObject*<CKBrowserViewControllerSendDelegate> sendDelegate; 
@property (nonatomic,readonly) IMBalloonPlugin * balloonPlugin; 
@property (nonatomic,retain) IMBalloonPluginDataSource * balloonPluginDataSource; 
@property (assign,nonatomic) char isiMessage; 
@property (assign,nonatomic) NSString * conversationID; 
@property (nonatomic,readonly) char wantsDarkUI; 
@property (nonatomic,readonly) char wantsOpaqueUI; 
@property (nonatomic,readonly) char supportsQuickView; 
@property (nonatomic,readonly) char mayBeKeptInViewHierarchy; 
@property (nonatomic,readonly) int browserPresentationStyle; 
@property (nonatomic,readonly) char shouldShowChatChrome; 
@property (nonatomic,readonly) char inExpandedPresentation; 
@property (nonatomic,readonly) unsigned badgeValue; 
@property (nonatomic,readonly) CKBrowserDragManager * browserDragManager; 
@property (assign,nonatomic) int currentBrowserConsumer; 
@property (nonatomic,readonly) char canReplaceDataSource; 
@property (nonatomic,retain) NSNumber * adamID; 
@property (nonatomic,readonly) int parentModalPresentationStyle; 
@property (nonatomic,__weak,readonly) id<UIViewControllerTransitioningDelegate> parentTransitioningDelegate; 
@property (nonatomic,readonly) char supportsResumablePayload; 
@property (nonatomic,retain) CKBrowserItemPayload * resumablePayload; 
-(void)setRecentsPicker:(HWFavoritesPickerView *)arg1 ;
-(UILabel *)swipeInstructionLabel;
-(void)setRoateInstructionLabel:(UILabel *)arg1 ;
-(UIView *)advancePageRightButton;
-(void)setKeyboardButton:(UIButton *)arg1 ;
-(void)setTopStackView:(UIStackView *)arg1 ;
-(void)setAdvancePageLeftButton:(UIView *)arg1 ;
-(HWScrollView *)handwritingScrollView;
-(NSLayoutConstraint *)topStackViewTopToTopScrollViewConstraint;
-(void)setBottomStackView:(UIStackView *)arg1 ;
-(NSLayoutConstraint *)scrollViewCenterYConstraint;
-(void)setBottomViewHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setSwipeInstructionLabel:(UILabel *)arg1 ;
-(UILabel *)roateInstructionLabel;
-(void)setScrollViewCenterYConstraint:(NSLayoutConstraint *)arg1 ;
-(HWPreviewBubbleView *)handwritingPreviewBubble;
-(void)setTopStackViewBottomToTopScrollViewConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)topStackViewHeightConstraint;
-(void)setHandwritingPreviewContainer:(UIView *)arg1 ;
-(void)setBottomStackViewBottomToBottomScrollViewConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setTopStackViewTopToTopScrollViewConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)topStackViewToSuperViewTopConstraint;
-(void)setHandwritingPreviewBubble:(HWPreviewBubbleView *)arg1 ;
-(UIButton *)keyboardButton;
-(NSLayoutConstraint *)bottomStackViewToSuperViewBottomConstraint;
-(UIView *)handwritingPreviewContainer;
-(void)setHandwritingContainerView:(UIView *)arg1 ;
-(NSLayoutConstraint *)topStackViewBottomToTopScrollViewConstraint;
-(NSLayoutConstraint *)bottomStackViewBottomToBottomScrollViewConstraint;
-(void)setTopStackViewToSuperViewTopConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)bottomStackViewTopToBottomScrollViewConstraint;
-(void)setBottomStackViewToSuperViewBottomConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setAdvancePageRightButton:(UIView *)arg1 ;
-(UIView *)advancePageLeftButton;
-(UIStackView *)topStackView;
-(void)setTopStackViewHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)bottomViewHeightConstraint;
-(void)setHandwritingScrollView:(HWScrollView *)arg1 ;
-(UIView *)handwritingContainerView;
-(void)setInputMethodPickerButton:(UIButton *)arg1 ;
-(void)setRecentsButton:(UIButton *)arg1 ;
-(UIButton *)inputMethodPickerButton;
-(UIButton *)recentsButton;
-(void)setBottomStackViewTopToBottomScrollViewConstraint:(NSLayoutConstraint *)arg1 ;
-(void)_toggleRecentsPicker:(id)arg1 ;
-(void)_updateLayoutForKeboardInterfaceOrientaion;
-(void)_datasourceUpdated:(id)arg1 ;
-(void)sendEncodedHandwriting:(id)arg1 ;
-(CGSize)_canvasSize;
-(void)_inkViewTouchesEndedNotification:(id)arg1 ;
-(void)_scrollToVisibleRegion;
-(HWFavoritesPickerView *)recentsPicker;
-(CGSize)currentLayoutSize;
-(id)_attributedButtonTitleForString:(id)arg1 foregroundColor:(id)arg2 ;
-(void)_undo:(id)arg1 ;
-(char)_currentKeyboardIsRTL;
-(char)_advancePageRightButtonShouldBeVisible;
-(void)_updateCanvasSize;
-(char)_swipePageHintTextShouldBeVisible;
-(void)_pickLayoutForSize:(CGSize)arg1 ;
-(id)_createAdvancePageRightButton;
-(char)_deviceOrientationPortrait;
-(float)pickerOffsetForEditMode:(id)arg1 ;
-(void)pickerDidEnterEditMode:(id)arg1 ;
-(void)_configureLayoutToiPadPortrait;
-(void)_configureLayoutToiPhoneWritepad;
-(void)_udpatePageButtonVisibility:(char)arg1 ;
-(void)_configureLayoutToiPhoneRecentsPicker;
-(void)pickerDidExitEditMode:(id)arg1 ;
-(void)_setupViewHierarchyForiPadWithBindings:(id)arg1 ;
-(void)_inkViewTouchesBeganNotification:(id)arg1 ;
-(void)storeHandwritingToFavorites:(id)arg1 ;
-(void)_workaround_sendNilMessageToForceModalDismiss;
-(void)_showInputMethodPicker:(id)arg1 event:(id)arg2 ;
-(void)_resetScrollView:(char)arg1 ;
-(void)setCurrentHandwritingItem:(HWHandwritingItem *)arg1 ;
-(id)_pageButtonWith:(SEL)arg1 image:(id)arg2 label:(id)arg3 ;
-(void)_scrollPageToLeft:(id)arg1 ;
-(id)_createAdvancePageLeftButton;
-(void)_sendTypingIndicator;
-(id)_keyboardImageDeviceSize:(char)arg1 orientationIsLandscape:(char)arg2 ;
-(UIStackView *)bottomStackView;
-(id)_handwritingItemFromCurrentState;
-(HWHandwritingItem *)currentHandwritingItem;
-(void)_updateSwipePageHintTextVisibility:(char)arg1 ;
-(CGRect)_visibleInkRegionInView;
-(void)_loadDrawingFromResumablePayload;
-(void)_sendHandwritingMessage;
-(id)_recentsPickerImageForState:(char)arg1 isLandscape:(char)arg2 ;
-(void)_nextInputMode:(id)arg1 ;
-(void)_setupViewHierarchyForiPhoneWithBindings:(id)arg1 ;
-(void)setCurrentLayoutSize:(CGSize)arg1 ;
-(void)_configureLayoutToiPadLandscape;
-(void)_dismissAndShowKeyboard:(id)arg1 ;
-(void)_updateUndoButton:(id)arg1 ;
-(char)handwritingScrollView:(id)arg1 shouldCancelTouchesInView:(id)arg2 ;
-(char)_advancePageLeftButtonShouldBeVisible;
-(void)_scrollPageToRight:(id)arg1 ;
-(void)dealloc;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(unsigned)supportedInterfaceOrientations;
-(void)didReceiveMemoryWarning;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)setBackgroundView:(UIView *)arg1 ;
-(UIView *)backgroundView;
-(void)viewDidLoad;
-(void)_applicationDidEnterBackground:(id)arg1 ;
-(void)_applicationWillEnterForeground:(id)arg1 ;
-(void)setDoneButton:(UIButton *)arg1 ;
-(UIButton *)doneButton;
-(UIView *)bottomView;
-(UIButton *)clearButton;
-(void)_updateClearButton;
-(void)setBottomView:(UIView *)arg1 ;
-(DKInkView *)canvasView;
-(void)setCanvasView:(DKInkView *)arg1 ;
-(int)browserPresentationStyle;
-(char)shouldPresentModally;
-(char)supportsResumablePayload;
-(CKBrowserItemPayload *)resumablePayload;
-(void)setResumablePayload:(CKBrowserItemPayload *)arg1 ;
-(void)_clear:(id)arg1 ;
-(void)setClearButton:(UIButton *)arg1 ;
-(void)_done:(id)arg1 ;
-(void)setUndoButton:(HWRepeatingButton *)arg1 ;
-(HWRepeatingButton *)undoButton;
@end

