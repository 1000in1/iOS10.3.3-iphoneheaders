/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 4:29:13 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PreferenceBundles/MobileMailSettings.bundle/MobileMailSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MailboxHierarchyNode, NSMutableDictionary;

@interface MailboxHierarchyTree : NSObject {

	MailboxHierarchyNode* _rootMailboxNode;
	NSMutableDictionary* _nodesByMailbox;
	char _mailboxStructureHasBeenCached;

}
-(void)dealloc;
-(id)addChildMailbox:(id)arg1 forMailboxNode:(id)arg2 ;
-(id)rootMailboxNode;
-(id)initWithRootMailbox:(id)arg1 ;
-(void)_addChildNode:(id)arg1 toParentNode:(id)arg2 ;
-(void)_insertMailboxUidsFlattenedFromMailboxNode:(id)arg1 intoArray:(id)arg2 currentLevel:(int)arg3 ;
-(void)removeNodeForMailbox:(id)arg1 ;
-(void)moveMailbox:(id)arg1 toParent:(id)arg2 ;
-(id)flattenedMailboxTreeRepresentation;
-(id)parentForMailbox:(id)arg1 ;
-(int)levelForMailbox:(id)arg1 ;
-(void)setDisplayName:(id)arg1 forMailbox:(id)arg2 ;
-(id)displayNameForMailbox:(id)arg1 ;
-(char)mailboxHasSubMailboxes:(id)arg1 ;
@end

