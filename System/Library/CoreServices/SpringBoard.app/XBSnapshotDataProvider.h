/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:36:53 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class XBSnapshotDataProviderContext;


@protocol XBSnapshotDataProvider <NSObject>
@property (nonatomic,retain,readonly) XBSnapshotDataProviderContext * context; 
@optional
-(id)fetchImageData:(out CGAffineTransform*)arg1;
-(id)fetchImage;

@required
-(XBSnapshotDataProviderContext *)context;

@end
