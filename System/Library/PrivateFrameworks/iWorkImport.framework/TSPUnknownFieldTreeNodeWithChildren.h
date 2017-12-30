/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 1:10:39 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSPUnknownFieldTreeNode.h>

@interface TSPUnknownFieldTreeNodeWithChildren : TSPUnknownFieldTreeNode {

	map<int, TSPUnknownFieldTreeNode *, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, TSPUnknownFieldTreeNode *> > >* _children;

}
-(id)childNodeForFieldNumber:(int)arg1 ;
-(char)addChildNode:(id)arg1 forFieldNumber:(int)arg2 ;
-(void)saveToArchiver:(id)arg1 message:(Message*)arg2 ;
@end

