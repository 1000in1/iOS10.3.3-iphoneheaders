/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:19 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBFolder.h>

@protocol SBRootFolderDelegate;
@class SBIconListModel;

@interface SBRootFolder : SBFolder {

	id<SBRootFolderDelegate> _delegate;

}

@property (setter=_setDock:,nonatomic,retain) SBIconListModel * dock; 
@property (assign,nonatomic,__weak) id<SBRootFolderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) char supportsDock; 
+(char)isRootFolderClass;
-(id)nodeIdentifier;
-(char)supportsDock;
-(void)placeIconsOnFirstPage:(id)arg1 ;
-(id)nodeDescriptionWithPrefix:(id)arg1 ;
-(id)_listsForCompaction;
-(char)canRemoveIcons;
-(char)canEditDisplayName;
-(void)_setDock:(id)arg1 ;
-(void)setDelegate:(id<SBRootFolderDelegate>)arg1 ;
-(id<SBRootFolderDelegate>)delegate;
-(SBIconListModel *)dock;
-(id)children;
-(char)isRootFolder;
@end

