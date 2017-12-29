/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:30 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Home.app/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HUSelectableServiceGridViewController.h>
#import <libobjc.A.dylib/HUServiceGridItemManagerDelegate.h>

@protocol HOTriggerEditorDelegate;
@class HFTriggerBuilder, UINavigationItem, NSString;

@interface HOTriggerActionEditorContentViewController : HUSelectableServiceGridViewController <HUServiceGridItemManagerDelegate> {

	HFTriggerBuilder* _triggerBuilder;
	unsigned _mode;
	UINavigationItem* _effectiveNavigationItem;
	id<HOTriggerEditorDelegate> _delegate;
	unsigned _forceDisableReasonsForSecureCharacteristicControl;

}

@property (nonatomic,retain) HFTriggerBuilder * triggerBuilder;                                       //@synthesize triggerBuilder=_triggerBuilder - In the implementation block
@property (assign,nonatomic) unsigned mode;                                                           //@synthesize mode=_mode - In the implementation block
@property (assign,nonatomic) unsigned forceDisableReasonsForSecureCharacteristicControl;              //@synthesize forceDisableReasonsForSecureCharacteristicControl=_forceDisableReasonsForSecureCharacteristicControl - In the implementation block
@property (nonatomic,readonly) UINavigationItem * effectiveNavigationItem;                            //@synthesize effectiveNavigationItem=_effectiveNavigationItem - In the implementation block
@property (assign,nonatomic,__weak) id<HOTriggerEditorDelegate> delegate;                             //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setTriggerBuilder:(HFTriggerBuilder *)arg1 ;
-(void)_validateDoneButton;
-(id)initWithTriggerBuilder:(id)arg1 mode:(unsigned)arg2 effectiveNavigationItem:(id)arg3 delegate:(id)arg4 ;
-(UINavigationItem *)effectiveNavigationItem;
-(void)_updateSelectedServicesAndActionSets;
-(id)_triggerBuilderFuture;
-(unsigned)_triggerForceDisableReasonsForActionItem:(id)arg1 ;
-(unsigned)forceDisableReasonsForSecureCharacteristicControl;
-(void)setForceDisableReasonsForSecureCharacteristicControl:(unsigned)arg1 ;
-(id)_updateTriggerBuilderActionSets;
-(id)_updateTriggerBuilderAnonymousActions;
-(void)setDelegate:(id<HOTriggerEditorDelegate>)arg1 ;
-(id<HOTriggerEditorDelegate>)delegate;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)setMode:(unsigned)arg1 ;
-(unsigned)mode;
-(void)_next:(id)arg1 ;
-(void)_cancel:(id)arg1 ;
-(HFTriggerBuilder *)triggerBuilder;
-(void)configureCell:(id)arg1 forItem:(id)arg2 ;
-(char)serviceGridItemManager:(id)arg1 shouldHideItem:(id)arg2 ;
-(char)itemManager:(id)arg1 performBatchUpdateBlock:(/*^block*/id)arg2 ;
-(void)itemManager:(id)arg1 didUpdateResultsForSourceItem:(id)arg2 ;
-(id)layoutOptionsForSection:(int)arg1 ;
-(id)initWithServiceGridItemManager:(id)arg1 ;
-(char)canSelectItem:(id)arg1 indexPath:(id)arg2 ;
-(void)didChangeSelection;
@end
