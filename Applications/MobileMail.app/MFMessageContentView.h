/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:55 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileMail/MobileMail-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIPopoverPresentationControllerDelegate.h>
#import <libobjc.A.dylib/WKNavigationDelegate.h>
#import <libobjc.A.dylib/WKNavigationDelegatePrivate.h>
#import <libobjc.A.dylib/WKUIDelegatePrivate.h>
#import <MobileMail/MFLoadBestAlternativeBannerViewDelegate.h>
#import <MobileMail/MFLoadRemoteImagesBannerViewDelegate.h>
#import <MobileMail/MFMessageHeaderViewDelegate.h>
#import <MobileMail/MFMailDropBannerDelegate.h>
#import <MobileMail/MFMailWebProcessDelegate.h>
#import <MobileMail/MFSuggestionHandlingDelegate.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <MobileMail/MFReusable.h>

@protocol MFScheduler, MFKVOObservation, MFMessageContentViewDelegate, MFMessageContentViewDataSource, MFCancelable;
@class MFCancelationToken, MFMessageContentAttachments, NSMutableDictionary, MFMessageHeaderView, MFMailDropBannerView, MFLoadBestAlternativeBannerView, MFLoadRemoteImagesBannerView, MessageSuggestionBannerView, PartialMessageIndicator, UIView, NSMutableArray, MessageSuggestionSession, UIBarButtonItem, MFConversationItemFooterView, MFMessageLoadingContext, NSString, MFMessageDisplayMetrics, MFMessageContentLoadingView, MFWebViewLoadingController, MFAttachmentManager, NSArray, WKWebView, MFWebViewDictionary, UIScrollView;

@interface MFMessageContentView : UIView <UIPopoverPresentationControllerDelegate, WKNavigationDelegate, WKNavigationDelegatePrivate, WKUIDelegatePrivate, MFLoadBestAlternativeBannerViewDelegate, MFLoadRemoteImagesBannerViewDelegate, MFMessageHeaderViewDelegate, MFMailDropBannerDelegate, MFMailWebProcessDelegate, MFSuggestionHandlingDelegate, UIScrollViewDelegate, MFReusable> {

	MFCancelationToken* _loadingCancelable;
	MFMessageContentAttachments* _attachmentsInfo;
	NSMutableDictionary* _attachmentCancelablesByContentID;
	MFMessageHeaderView* _headerView;
	MFMailDropBannerView* _mailDropBanner;
	MFLoadBestAlternativeBannerView* _loadBestAlternativePartBanner;
	MFLoadRemoteImagesBannerView* _loadImagesHeaderBlock;
	MessageSuggestionBannerView* _suggestionBanner;
	PartialMessageIndicator* _partialMessageIndicator;
	UIView* _previousContentSnapshotWrapperView;
	UIView* _backgroundView;
	id<MFScheduler> _attachmentsScheduler;
	NSMutableArray* _scriptHandlers;
	MessageSuggestionSession* _suggestionSession;
	UIBarButtonItem* _presentedControllerDoneButtonItem;
	id<MFKVOObservation> _contentSizeObservation;
	char _suppressContentSizeNotifications;
	UIEdgeInsets _originalZoomInsets;
	char _paddingConstantsNeedUpdate;
	MFConversationItemFooterView* _footerView;
	unsigned _webProcessCrashCount;
	struct {
		unsigned delegateRespondsToDidFinishLoadingMessages : 1;
		unsigned delegateRespondsToDidFinishFirstPaint : 1;
		unsigned delegateRespondsToDidDisplayContent : 1;
		unsigned delegateRespondsToDidFinishRenderingWithHeight : 1;
		unsigned delegateRespondsToExpandQuoteAtScrollOffset : 1;
		unsigned delegateRespondsToWillBeginZoomingMessage : 1;
		unsigned delegateRespondsToDidEndZoomingMessage : 1;
		unsigned delegateRespondsToDidTapRevealActionsButton : 1;
		unsigned delegateRespondsToLoadingIndicatorDidChangeVisibility : 1;
	}  _flags;
	char _automaticallyCollapseQuotedContent;
	char _showMessageFooter;
	char _showRemoteImages;
	char _initiallyZoomsToShowAllContent;
	char _suppressScrolling;
	char _contentPaddingFollowsLayoutMargins;
	char _hasVisibleContent;
	char _showsBanners;
	char _zoomEnabled;
	id<MFMessageContentViewDelegate> _delegate;
	id<MFMessageContentViewDataSource> _dataSource;
	MFMessageLoadingContext* _loadingContext;
	NSString* _selectedHTML;
	UIView* _previousContentSnapshot;
	MFMessageDisplayMetrics* _displayMetrics;
	id<MFCancelable> _loadingIndicatorCancelable;
	MFMessageContentLoadingView* _loadingView;
	float _initialScale;
	MFWebViewLoadingController* _webViewLoadingController;
	CGPoint _initialContentOffset;

}

@property (nonatomic,readonly) MFAttachmentManager * attachmentManager; 
@property (nonatomic,retain) MFMessageDisplayMetrics * displayMetrics;                                   //@synthesize displayMetrics=_displayMetrics - In the implementation block
@property (copy) NSArray * attachments; 
@property (nonatomic,copy) NSString * selectedHTML;                                                      //@synthesize selectedHTML=_selectedHTML - In the implementation block
@property (nonatomic,retain) id<MFCancelable> loadingIndicatorCancelable;                                //@synthesize loadingIndicatorCancelable=_loadingIndicatorCancelable - In the implementation block
@property (nonatomic,retain) MFMessageContentLoadingView * loadingView;                                  //@synthesize loadingView=_loadingView - In the implementation block
@property (assign,getter=isLoadingIndicatorVisible,nonatomic) char loadingIndicatorVisible; 
@property (assign,nonatomic) float initialScale;                                                         //@synthesize initialScale=_initialScale - In the implementation block
@property (assign,nonatomic) char hasVisibleContent;                                                     //@synthesize hasVisibleContent=_hasVisibleContent - In the implementation block
@property (nonatomic,retain) MFWebViewLoadingController * webViewLoadingController;                      //@synthesize webViewLoadingController=_webViewLoadingController - In the implementation block
@property (nonatomic,readonly) WKWebView * webView; 
@property (nonatomic,readonly) MFWebViewDictionary * webViewConstants; 
@property (assign,nonatomic) id<MFMessageContentViewDelegate> delegate;                                  //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<MFMessageContentViewDataSource> dataSource;                       //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,retain) MFMessageLoadingContext * loadingContext;                                   //@synthesize loadingContext=_loadingContext - In the implementation block
@property (nonatomic,readonly) char sourceIsManaged; 
@property (nonatomic,readonly) UIScrollView * scrollView; 
@property (assign,nonatomic) CGPoint initialContentOffset;                                               //@synthesize initialContentOffset=_initialContentOffset - In the implementation block
@property (nonatomic,readonly) MFMessageHeaderView * headerView;                                         //@synthesize headerView=_headerView - In the implementation block
@property (assign,nonatomic) char automaticallyCollapseQuotedContent;                                    //@synthesize automaticallyCollapseQuotedContent=_automaticallyCollapseQuotedContent - In the implementation block
@property (assign,nonatomic) char showMessageFooter;                                                     //@synthesize showMessageFooter=_showMessageFooter - In the implementation block
@property (assign,nonatomic) char showRemoteImages;                                                      //@synthesize showRemoteImages=_showRemoteImages - In the implementation block
@property (nonatomic,retain) UIView * previousContentSnapshot;                                           //@synthesize previousContentSnapshot=_previousContentSnapshot - In the implementation block
@property (readonly) NSArray * previewableAttachments; 
@property (assign,nonatomic) char initiallyZoomsToShowAllContent;                                        //@synthesize initiallyZoomsToShowAllContent=_initiallyZoomsToShowAllContent - In the implementation block
@property (assign,nonatomic) char suppressScrolling;                                                     //@synthesize suppressScrolling=_suppressScrolling - In the implementation block
@property (assign,nonatomic) char contentPaddingFollowsLayoutMargins;                                    //@synthesize contentPaddingFollowsLayoutMargins=_contentPaddingFollowsLayoutMargins - In the implementation block
@property (assign,nonatomic) char showsBanners;                                                          //@synthesize showsBanners=_showsBanners - In the implementation block
@property (assign,getter=isZoomEnabled,nonatomic) char zoomEnabled;                                      //@synthesize zoomEnabled=_zoomEnabled - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didConfirmAction:(id)arg1 ;
-(void)didIgnoreAction:(id)arg1 ;
-(void)showConfirmationForAction:(id)arg1 sender:(id)arg2 ;
-(void)ignoreAction:(id)arg1 ;
-(void)displayMultipleCallsToAction:(id)arg1 sender:(id)arg2 ;
-(void)generateSnapshotImageWithCompletion:(/*^block*/id)arg1 ;
-(MFMessageDisplayMetrics *)displayMetrics;
-(void)mailDropBannerDidTriggerDownload:(id)arg1 ;
-(void)setDisplayMetrics:(MFMessageDisplayMetrics *)arg1 ;
-(void)setContentPaddingFollowsLayoutMargins:(char)arg1 ;
-(NSString *)selectedHTML;
-(void)setSuppressScrolling:(char)arg1 ;
-(void)setAutomaticallyCollapseQuotedContent:(char)arg1 ;
-(void)clearSelectedHTML;
-(void)setLoadingIndicatorVisible:(char)arg1 animated:(char)arg2 ;
-(char)isLoadingIndicatorVisible;
-(void)setLoadingIndicatorVisible:(char)arg1 ;
-(char)automaticallyCollapseQuotedContent;
-(void)setShowMessageFooter:(char)arg1 ;
-(NSArray *)previewableAttachments;
-(unsigned)indexOfPreviewableAttachment:(id)arg1 ;
-(void)_stopObservingContentHeight;
-(void)_reloadUserStyleSheets;
-(void)_updateMinimumFontSize;
-(void)_addScriptHandlerForKey:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_handleAttachmentTapMessage:(id)arg1 ;
-(void)_parsedMailDropNodes:(id)arg1 ;
-(void)_expandQuoteWithCollapsedBlockquoteOffset:(float)arg1 expandedOffset:(float)arg2 ;
-(id)_libraryMessage;
-(void)_foundImageCIDAttachments:(id)arg1 ;
-(void)setSelectedHTML:(NSString *)arg1 ;
-(void)setShowRemoteImages:(char)arg1 ;
-(void)setInitiallyZoomsToShowAllContent:(char)arg1 ;
-(void)setShowsBanners:(char)arg1 ;
-(void)_addLoadingSubview:(id)arg1 ;
-(void)_setupWebProcessLocalizedStrings;
-(MFWebViewLoadingController *)webViewLoadingController;
-(MFWebViewDictionary *)webViewConstants;
-(void)setHasVisibleContent:(char)arg1 ;
-(void)_clearAllBannersAnimated:(char)arg1 ;
-(id)_quotedContentAttributionForMessage:(id)arg1 ;
-(void)showDelayedProgressUI;
-(void)loadingContext:(id)arg1 didLoadEvent:(id)arg2 error:(id)arg3 ;
-(void)loadingContext:(id)arg1 contentAnalysisFoundSuggestions:(id)arg2 error:(id)arg3 ;
-(void)clearMessage;
-(id)_executeJavaScriptExpression:(id)arg1 ;
-(void)_layoutFooterView;
-(float)_viewportWidth;
-(char)contentPaddingFollowsLayoutMargins;
-(id)_executeJavaScriptMethod:(id)arg1 arguments:(id)arg2 ;
-(void)_setNeedsPaddingConstantsUpdate;
-(void)_updateWebViewPaddingConstants;
-(void)_seeMoreButtonTapped;
-(void)_revealActionsButtonTapped;
-(id)messageDisplayMetricsForTraitCollection:(id)arg1 layoutMargins:(UIEdgeInsets)arg2 ;
-(void)_updateDisplayMetrics;
-(char)showMessageFooter;
-(id)_styleSheetWithPadding:(UIEdgeInsets)arg1 useWideLayout:(char)arg2 ;
-(UIView *)previousContentSnapshot;
-(void)setPreviousContentSnapshot:(UIView *)arg1 ;
-(void)_clearLoadRemoteImagesBannerAnimated:(char)arg1 ;
-(void)_clearLoadBestAlternativeBannerAnimated:(char)arg1 ;
-(void)_clearLoadRemainingMessageContentFooterAnimated:(char)arg1 ;
-(void)_clearSuggestionsBannerAnimated:(char)arg1 ;
-(id<MFCancelable>)loadingIndicatorCancelable;
-(void)setLoadingIndicatorCancelable:(id<MFCancelable>)arg1 ;
-(void)_removeLoadingSubview:(id)arg1 ;
-(void)_requestWebViewLoad;
-(void)_addLoadBestAlternativePartBanner;
-(void)_addLoadRemainingMessageContentFooterWithRemainingBytes:(unsigned)arg1 ;
-(id)imageAttachments;
-(id)mailDropAttachments;
-(void)_alertMailDropDownloadIsTooLargeForCell:(char)arg1 ;
-(void)_setAttachmentState:(int)arg1 forAttachment:(id)arg2 ;
-(void)_beginObservingProgressForAttachment:(id)arg1 ;
-(void)loadRemainingMessageContentIfNecessary;
-(void)loadBestAlternativePartIfNecessary;
-(void)_attachment:(id)arg1 finishedLoadingWithData:(id)arg2 ;
-(void)_displayDismissibleAttachmentErrorWithTitle:(id)arg1 message:(id)arg2 ;
-(void)_stopObservingProgressForAttachment:(id)arg1 ;
-(void)_attachment:(id)arg1 sendDisplayAction:(SEL)arg2 fromRect:(CGRect)arg3 iconRect:(CGRect)arg4 inView:(id)arg5 ;
-(void)_setAttachmentProgress:(float)arg1 forAttachment:(id)arg2 ;
-(id)_existingAttachmentForContentID:(id)arg1 ;
-(int)_displayStateForAttachment:(id)arg1 ;
-(void)_attachment:(id)arg1 displayViewerFromRect:(CGRect)arg2 inView:(id)arg3 ;
-(char)_startDownloadForAttachment:(id)arg1 userInitiated:(char)arg2 shouldLoadRemainingMessageContent:(char)arg3 ;
-(void)_attachmentNodeWasTappedWithContentId:(id)arg1 rect:(CGRect)arg2 view:(id)arg3 ;
-(void)_injectAttachmentViewForElementWithSourceAttributeValue:(id)arg1 forAttachment:(id)arg2 ;
-(void)_didInjectAttachment:(id)arg1 ;
-(void)_beginObservingContentHeight;
-(char)showsBanners;
-(char)initiallyZoomsToShowAllContent;
-(id)_attachmentForElement:(id)arg1 ;
-(void)_longPressedAttachment:(id)arg1 rect:(CGRect)arg2 view:(id)arg3 ;
-(id)_previewableAttachmentsExcludingBanner;
-(float)_adjustWebViewInsetsToAccomodateHeader;
-(id)_maildropMetadataFromMessageHeaders;
-(id)_attachmentForMailDropMetaData:(id)arg1 ;
-(void)_injectAttachmentViewForMailDropAttachment:(id)arg1 ;
-(id)attachmentElementAttributesForAttachment:(id)arg1 ;
-(void)_notifyDelegateScrollViewSizeChanged:(CGSize)arg1 ;
-(void)_downloadAllMailDropAttachments;
-(void)didTapLoadRemainingMessageContentFooterView:(id)arg1 ;
-(void)_showModalViewController:(id)arg1 fromView:(id)arg2 animated:(char)arg3 ;
-(void)_updateSuggestionsBannerForAction:(id)arg1 ;
-(void)_resetHeaderOffsetForZoom;
-(char)suppressScrolling;
-(void)_adjustHeaderOffsetForZoom;
-(void)didTapLoadBestAlternativeBannerView:(id)arg1 ;
-(void)loadRemoteImagesBannerDidTriggerLoad:(id)arg1 ;
-(void)headerViewDidChangeHeight:(id)arg1 ;
-(void)webProcessDidFailLoadingResourceWithURL:(id)arg1 ;
-(void)webProcessDidFinishDocumentLoadForURL:(id)arg1 ;
-(void)webProcessDidFinishLoadForURL:(id)arg1 ;
-(void)webProcessDidBlockLoadingResourceWithURL:(id)arg1 ;
-(void)webProcessDidCreateBrowserContextControllerLoadDelegate;
-(void)webProcessDidWriteToPasteboard;
-(void)updateForRedisplay;
-(id)currentContentSnapshotView;
-(id)_existingAttachmentForURL:(id)arg1 ;
-(char)showRemoteImages;
-(void)setWebViewLoadingController:(MFWebViewLoadingController *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setDataSource:(id<MFMessageContentViewDataSource>)arg1 ;
-(void)setDelegate:(id<MFMessageContentViewDelegate>)arg1 ;
-(void)dealloc;
-(void)scrollViewDidZoom:(id)arg1 ;
-(id)viewForZoomingInScrollView:(id)arg1 ;
-(void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2 ;
-(void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(float)arg3 ;
-(void)reload;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id<MFMessageContentViewDataSource>)dataSource;
-(id<MFMessageContentViewDelegate>)delegate;
-(UIScrollView *)scrollView;
-(void)layoutMarginsDidChange;
-(void)setZoomEnabled:(char)arg1 ;
-(char)isZoomEnabled;
-(void)prepareForReuse;
-(void)presentationController:(id)arg1 willPresentWithAdaptiveStyle:(int)arg2 transitionCoordinator:(id)arg3 ;
-(void)selectAll:(id)arg1 ;
-(WKWebView *)webView;
-(MFMessageHeaderView *)headerView;
-(char)sourceIsManaged;
-(float)initialScale;
-(NSArray *)attachments;
-(void)setAttachments:(NSArray *)arg1 ;
-(id)viewPrintFormatter;
-(MFMessageLoadingContext *)loadingContext;
-(void)setLoadingContext:(MFMessageLoadingContext *)arg1 ;
-(MFAttachmentManager *)attachmentManager;
-(void)_layoutLoadingView;
-(void)setLoadingView:(MFMessageContentLoadingView *)arg1 ;
-(MFMessageContentLoadingView *)loadingView;
-(void)_webView:(id)arg1 renderingProgressDidChange:(unsigned)arg2 ;
-(void)_webViewWebProcessDidBecomeUnresponsive:(id)arg1 ;
-(id)_dataDetectionContextForWebView:(id)arg1 ;
-(char)_webView:(id)arg1 showCustomSheetForElement:(id)arg2 ;
-(id)_attachmentListForWebView:(id)arg1 sourceIsManaged:(char*)arg2 ;
-(unsigned)_webView:(id)arg1 indexIntoAttachmentListForElement:(id)arg2 ;
-(void)setInitialContentOffset:(CGPoint)arg1 ;
-(CGPoint)initialContentOffset;
-(id)presentedControllerDoneButtonItem;
-(void)dismissPresentedViewController:(id)arg1 ;
-(void)setInitialScale:(float)arg1 ;
-(void)addAttachments:(id)arg1 ;
-(void)_layoutBackgroundView;
-(char)hasVisibleContent;
-(void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(/*^block*/id)arg3 ;
-(void)webView:(id)arg1 decidePolicyForNavigationResponse:(id)arg2 decisionHandler:(/*^block*/id)arg3 ;
-(void)webView:(id)arg1 didCommitNavigation:(id)arg2 ;
-(void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3 ;
-(void)webViewWebContentProcessDidTerminate:(id)arg1 ;
-(void)_fontSizeDidChange:(id)arg1 ;
@end

