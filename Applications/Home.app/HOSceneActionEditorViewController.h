/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:25 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Home.app/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HUItemTableViewController.h>
#import <Home/HUSwitchCellDelegate.h>
#import <Home/HOSceneServicePickerViewControllerDelegate.h>
#import <Home/HUNameAndIconEditorCellDelegate.h>
#import <Home/HUIconPickerViewControllerDelegate.h>
#import <libobjc.A.dylib/HUQuickControlDetailsPresentationDelegateHost.h>

@protocol HUPresentationDelegate, HOSceneEditorDelegate;
@class HOSceneActionGridViewController, HOSceneActionEditorItemManager, NSString;

@interface HOSceneActionEditorViewController : HUItemTableViewController <HUSwitchCellDelegate, HOSceneServicePickerViewControllerDelegate, HUNameAndIconEditorCellDelegate, HUIconPickerViewControllerDelegate, HUQuickControlDetailsPresentationDelegateHost> {

	char _requiresQuickControlDismissal;
	char _showCancelButton;
	char _hasPerformedInitialLoad;
	id<HUPresentationDelegate> _presentationDelegate;
	HOSceneActionGridViewController* _actionGridViewController;
	unsigned _mode;
	id<HOSceneEditorDelegate> _sceneEditorDelegate;
	HOSceneActionEditorItemManager* _actionEditorItemManager;
	NSString* _editingName;

}

@property (assign,nonatomic,__weak) HOSceneActionEditorItemManager * actionEditorItemManager;              //@synthesize actionEditorItemManager=_actionEditorItemManager - In the implementation block
@property (assign,nonatomic) unsigned mode;                                                                //@synthesize mode=_mode - In the implementation block
@property (nonatomic,copy) NSString * editingName;                                                         //@synthesize editingName=_editingName - In the implementation block
@property (nonatomic,readonly) NSString * savedName; 
@property (assign,nonatomic) char hasPerformedInitialLoad;                                                 //@synthesize hasPerformedInitialLoad=_hasPerformedInitialLoad - In the implementation block
@property (nonatomic,readonly) HOSceneActionGridViewController * actionGridViewController;                 //@synthesize actionGridViewController=_actionGridViewController - In the implementation block
@property (assign,nonatomic) char showCancelButton;                                                        //@synthesize showCancelButton=_showCancelButton - In the implementation block
@property (assign,nonatomic,__weak) id<HOSceneEditorDelegate> sceneEditorDelegate;                         //@synthesize sceneEditorDelegate=_sceneEditorDelegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<HUPresentationDelegate> presentationDelegate;                       //@synthesize presentationDelegate=_presentationDelegate - In the implementation block
@property (assign,nonatomic) char requiresQuickControlDismissal;                                           //@synthesize requiresQuickControlDismissal=_requiresQuickControlDismissal - In the implementation block
+(char)adoptsDefaultGridLayoutMargins;
-(void)setShowCancelButton:(char)arg1 ;
-(id)initWithActionSetBuilder:(id)arg1 mode:(unsigned)arg2 ;
-(NSString *)editingName;
-(NSString *)savedName;
-(void)setEditingName:(NSString *)arg1 ;
-(void)setSceneEditorDelegate:(id<HOSceneEditorDelegate>)arg1 ;
-(void)_validateDoneButton;
-(char)hasPerformedInitialLoad;
-(void)setHasPerformedInitialLoad:(char)arg1 ;
-(id<HOSceneEditorDelegate>)sceneEditorDelegate;
-(HOSceneActionEditorItemManager *)actionEditorItemManager;
-(void)_updateActionSetBuilderName;
-(char)_allowEditingNameAndIcon;
-(HOSceneActionGridViewController *)actionGridViewController;
-(void)_changeServices:(id)arg1 ;
-(void)_testScene:(id)arg1 ;
-(void)_deleteScene:(id)arg1 ;
-(void)sceneServicePickerDidFinish:(id)arg1 ;
-(void)setActionEditorItemManager:(HOSceneActionEditorItemManager *)arg1 ;
-(char)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)setMode:(unsigned)arg1 ;
-(unsigned)mode;
-(char)showCancelButton;
-(id<HUPresentationDelegate>)presentationDelegate;
-(void)setPresentationDelegate:(id<HUPresentationDelegate>)arg1 ;
-(void)_cancel:(id)arg1 ;
-(void)iconPickerDidCancel:(id)arg1 ;
-(void)iconPicker:(id)arg1 didPickIconDescriptor:(id)arg2 ;
-(void)updateCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 animated:(char)arg4 ;
-(id)allCellClasses;
-(Class)cellClassForItem:(id)arg1 indexPath:(id)arg2 ;
-(char)shouldHideHeaderAboveSection:(int)arg1 ;
-(char)shouldHideFooterBelowSection:(int)arg1 ;
-(id)childViewControllersToPreload;
-(char)itemManager:(id)arg1 performBatchUpdateBlock:(/*^block*/id)arg2 ;
-(void)switchCell:(id)arg1 didTurnOn:(char)arg2 ;
-(void)setupCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 ;
-(char)requiresQuickControlDismissal;
-(void)setRequiresQuickControlDismissal:(char)arg1 ;
-(char)shouldManageTextFieldForItem:(id)arg1 ;
-(id)defaultTextForTextField:(id)arg1 item:(id)arg2 ;
-(id)currentTextForTextField:(id)arg1 item:(id)arg2 ;
-(id)placeholderTextForTextField:(id)arg1 item:(id)arg2 ;
-(char)shouldHideSeparatorsForCell:(id)arg1 indexPath:(id)arg2 ;
-(void)textFieldDidBeginEditing:(id)arg1 item:(id)arg2 ;
-(void)textDidChange:(id)arg1 forTextField:(id)arg2 item:(id)arg3 ;
-(void)textFieldDidEndEditing:(id)arg1 item:(id)arg2 ;
-(void)nameAndIconEditorCellDidTapIcon:(id)arg1 ;
-(void)_done:(id)arg1 ;
@end

