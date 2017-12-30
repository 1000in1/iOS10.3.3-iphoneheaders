/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:56 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileMail/MFTriageInteraction.h>
#import <MobileMail/_MFLazyPreviewActionItemDataSource.h>

@protocol MFMailboxPrediction;
@class UIViewController, NSArray, NSString;

@interface MFMoveToPredictionTriageInteraction : MFTriageInteraction <_MFLazyPreviewActionItemDataSource> {

	UIViewController* _transferUIViewController;
	id<MFMailboxPrediction> _prediction;
	NSArray* _previewActions;
	/*^block*/id _previewActionHandler;

}

@property (nonatomic,retain) UIViewController * transferUIViewController;              //@synthesize transferUIViewController=_transferUIViewController - In the implementation block
@property (nonatomic,retain) id<MFMailboxPrediction> prediction;                       //@synthesize prediction=_prediction - In the implementation block
@property (nonatomic,retain) NSArray * previewActions;                                 //@synthesize previewActions=_previewActions - In the implementation block
@property (nonatomic,copy) id previewActionHandler;                                    //@synthesize previewActionHandler=_previewActionHandler - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)interactionWithMessages:(id)arg1 mall:(id)arg2 predictionContext:(unsigned)arg3 existingPrediction:(id)arg4 presentationSource:(id)arg5 delegate:(id)arg6 presentingViewController:(id)arg7 ;
-(void)performInteractionWithCompletion:(/*^block*/id)arg1 ;
-(void)moveToTargetMailbox:(id)arg1 ;
-(id)swipeAction;
-(void)_performInteraction_Internal;
-(id)miniIcon;
-(id)previewActionItemForSwipe:(char)arg1 ;
-(id)miniSwipeAction;
-(id)lazyPreviewActions;
-(/*^block*/id)lazyPreviewActionHandler;
-(void)setTransferUIViewController:(UIViewController *)arg1 ;
-(char)_hasPrediction;
-(void)_presentFollowUpActionSheetWithCompletion:(/*^block*/id)arg1 ;
-(void)_presentTransferUI;
-(void)_enumeratePredictionActions:(/*^block*/id)arg1 ;
-(UIViewController *)transferUIViewController;
-(void)setPreviewActions:(NSArray *)arg1 ;
-(id)previewActionHandler;
-(void)setPreviewActionHandler:(id)arg1 ;
-(void)dealloc;
-(id)title;
-(id)color;
-(NSArray *)previewActions;
-(id<MFMailboxPrediction>)prediction;
-(id)icon;
-(void)setPrediction:(id<MFMailboxPrediction>)arg1 ;
-(id)shortTitle;
@end

