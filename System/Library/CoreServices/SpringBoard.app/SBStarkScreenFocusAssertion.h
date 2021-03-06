/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:18 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, UIWindow;

@interface SBStarkScreenFocusAssertion : NSObject {

	NSString* _name;
	int _type;
	float _priority;
	NSString* _bundleID;
	int _pid;
	UIWindow* _window;

}

@property (nonatomic,copy,readonly) NSString * name;                  //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) int type;                              //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) float priority;                        //@synthesize priority=_priority - In the implementation block
@property (nonatomic,__weak,readonly) UIWindow * window;              //@synthesize window=_window - In the implementation block
@property (nonatomic,copy,readonly) NSString * bundleID;              //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,readonly) int pid;                               //@synthesize pid=_pid - In the implementation block
-(id)initWithName:(id)arg1 type:(int)arg2 priority:(float)arg3 window:(id)arg4 application:(id)arg5 pid:(int)arg6 ;
-(UIWindow *)window;
-(id)description;
-(NSString *)name;
-(int)type;
-(float)priority;
-(NSString *)bundleID;
-(int)pid;
@end

