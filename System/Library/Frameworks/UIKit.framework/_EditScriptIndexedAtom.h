/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:28 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface _EditScriptIndexedAtom : NSObject {

	int _editOperation;
	unsigned _indexToEdit;
	unsigned _indexInArrayB;
	NSString* _replacementText;

}

@property (assign,nonatomic) int editOperation;                       //@synthesize editOperation=_editOperation - In the implementation block
@property (assign,nonatomic) unsigned indexToEdit;                    //@synthesize indexToEdit=_indexToEdit - In the implementation block
@property (assign,nonatomic) unsigned indexInArrayB;                  //@synthesize indexInArrayB=_indexInArrayB - In the implementation block
@property (nonatomic,retain) NSString * replacementText;              //@synthesize replacementText=_replacementText - In the implementation block
+(id)atomWithEditOperation:(int)arg1 indexToEdit:(unsigned)arg2 newText:(id)arg3 indexInArrayB:(unsigned)arg4 ;
-(id)description;
-(void)setReplacementText:(NSString *)arg1 ;
-(NSString *)replacementText;
-(int)editOperation;
-(unsigned)indexToEdit;
-(void)setIndexToEdit:(unsigned)arg1 ;
-(void)setEditOperation:(int)arg1 ;
-(void)setIndexInArrayB:(unsigned)arg1 ;
-(id)initWithEditOperation:(int)arg1 indexToEdit:(unsigned)arg2 newText:(id)arg3 indexInArrayB:(unsigned)arg4 ;
-(unsigned)indexInArrayB;
@end

