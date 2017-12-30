/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:20 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBTreeNode.h>
#import <SpringBoard/SBIconIndexNode.h>

@protocol SBTreeNode;
@class NSHashTable, UIImage, NSString, NSArray;

@interface SBIcon : NSObject <SBTreeNode, SBIconIndexNode> {

	NSHashTable* _observers;
	id _badgeNumberOrString;
	unsigned _uninstalled : 1;
	UIImage* _cachedIconImages[17];
	id<SBTreeNode> _parentNode;

}

@property (assign,nonatomic,__weak) id<SBTreeNode> parent; 
@property (nonatomic,readonly) char shouldWarmUp; 
@property (nonatomic,copy,readonly) NSString * displayName; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSArray * children; 
+(id)memoryMappedIconImageForIconImage:(id)arg1 ;
+(id)memoryMappedIconImageOfSize:(CGSize)arg1 scale:(float)arg2 withDrawing:(/*^block*/id)arg3 ;
+(id)_iconImagesMemoryPool;
+(id)_iconImageOfSize:(CGSize)arg1 scale:(float)arg2 failGracefully:(char)arg3 drawing:(/*^block*/id)arg4 ;
-(char)isApplicationIcon;
-(void)launchFromLocation:(int)arg1 context:(id)arg2 ;
-(id)leafIdentifier;
-(id)getCachedIconImage:(int)arg1 ;
-(char)shouldCacheImageForFormat:(int)arg1 ;
-(id)folderTitleOptions;
-(id)uninstallAlertTitle;
-(id)uninstallAlertConfirmTitle;
-(id)uninstallAlertCancelTitle;
-(void)userTouchBegan;
-(void)purgeCachedImages;
-(id)automationID;
-(id)folderFallbackTitle;
-(id)uninstallAlertTitleNotAllowed;
-(id)uninstallAlertBody;
-(id)uninstallAlertBodyNotAllowed;
-(id)uninstallAlertBodyForAppWithDocumentsOrDataInCloud;
-(id)masqueradeIdentifier;
-(char)isUninstalled;
-(id)badgeNumberOrString;
-(void)reloadIconImage;
-(id)getStandardIconImageForLocation:(int)arg1 ;
-(char)isDownloadingIcon;
-(char)isEmptyPlaceholder;
-(char)isGrabbedIconPlaceholder;
-(char)isFolderIcon;
-(id)accessoryTextForLocation:(int)arg1 ;
-(char)isLeafIcon;
-(void)completeUninstall;
-(void)setUninstalled;
-(id)nodeIdentifier;
-(char)hasFolderIconView;
-(char)isBookmarkIcon;
-(void)noteBadgeDidChange;
-(id)appPlaceholder;
-(id)getIconImage:(int)arg1 ;
-(int)localizedCompareDisplayNames:(id)arg1 ;
-(id)gridCellImage;
-(int)iconFormatForLocation:(int)arg1 ;
-(id)getGenericIconImage:(int)arg1 ;
-(void)addNodeObserver:(id)arg1 ;
-(void)removeNodeObserver:(id)arg1 ;
-(void)_notifyAccessoriesDidUpdate;
-(float)progressPercent;
-(void)_notifyImageDidUpdate;
-(id)containedNodeIdentifiers;
-(id)indexPathsForContainedNodeIdentifier:(id)arg1 prefixPath:(id)arg2 ;
-(id)nodesAlongIndexPath:(id)arg1 consumedIndexes:(unsigned)arg2 ;
-(id)nodeDescriptionWithPrefix:(id)arg1 ;
-(char)progressIsPaused;
-(char)shouldAnimateProgress;
-(void)_notifyLaunchEnabledDidChange;
-(void)reloadIconImagePurgingImageCache:(char)arg1 ;
-(int)accessoryTypeForLocation:(int)arg1 ;
-(char)isRecentlyUpdated;
-(char)canEllipsizeLabel;
-(char)canTightenLabel;
-(Class)iconImageViewClassForLocation:(int)arg1 ;
-(char)canReceiveGrabbedIcon;
-(char)shouldWarmUp;
-(char)matchesEntity:(id)arg1 ;
-(char)launchEnabled;
-(char)isUninstallSupported;
-(id)generateIconImage:(int)arg1 ;
-(id)displayNameForLocation:(int)arg1 ;
-(char)containsNodeIdentifier:(id)arg1 ;
-(id)tags;
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(char)isPlaceholder;
-(int)badgeValue;
-(id)application;
-(void)setBadge:(id)arg1 ;
-(NSString *)displayName;
-(id)applicationBundleID;
-(char)hasObserver:(id)arg1 ;
-(id)folder;
-(id)getUnmaskedIconImage:(int)arg1 ;
-(int)progressState;
-(char)isBeta;
-(NSArray *)children;
-(id<SBTreeNode>)parent;
-(void)setParent:(id<SBTreeNode>)arg1 ;
-(void)localeChanged;
@end

