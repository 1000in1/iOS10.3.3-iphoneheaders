/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:00 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Feedback Assistant iOS.app/Feedback Assistant iOS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL;

@interface FBASqliteReader : NSObject {

	NSURL* _dbFile;

}

@property (nonatomic,retain) NSURL * dbFile;              //@synthesize dbFile=_dbFile - In the implementation block
-(void)setDbFile:(NSURL *)arg1 ;
-(id)allRowsForTable:(id)arg1 ;
-(NSURL *)dbFile;
-(id)csvRepresentationForTable:(id)arg1 ;
-(id)tableNames;
-(id)initWithFile:(id)arg1 ;
-(id)runQuery:(id)arg1 ;
@end

