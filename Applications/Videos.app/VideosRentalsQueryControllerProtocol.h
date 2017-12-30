/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:41 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Videos.app/Videos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class VideosQueryDataSource;


@protocol VideosRentalsQueryControllerProtocol <NSObject>
@property (assign,nonatomic,__weak) id<VideosRentalsQueryControllerDelegate> delegate; 
@property (nonatomic,readonly) VideosQueryDataSource * currentDataSource; 
@required
+(id)rentalQueryForCurrentAccountStatus;
-(VideosQueryDataSource *)currentDataSource;
-(void)setDelegate:(id)arg1;
-(id<VideosRentalsQueryControllerDelegate>)delegate;

@end

