/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:36 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol UIWebFindOnPageHighlighter <NSObject>
@property (nonatomic,copy,readonly) NSString * searchText; 
@property (assign,nonatomic) id<UIWebFindOnPageHighlighterDelegate> delegate; 
@property (nonatomic,readonly) unsigned numberOfMatches; 
@property (nonatomic,readonly) unsigned highlightedMatchIndex; 
@required
-(void)setDelegate:(id)arg1;
-(id<UIWebFindOnPageHighlighterDelegate>)delegate;
-(NSString *)searchText;
-(void)setSearchText:(id)arg1 matchLimit:(unsigned)arg2;
-(void)setSelectionRect:(CGRect)arg1 textRects:(id)arg2 contentViews:(id)arg3 wobble:(char)arg4;
-(void)highlightNextMatch;
-(void)highlightPreviousMatch;
-(unsigned)numberOfMatches;
-(unsigned)highlightedMatchIndex;

@end

