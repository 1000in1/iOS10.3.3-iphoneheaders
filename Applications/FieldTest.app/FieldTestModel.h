/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:03 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/FieldTest.app/FieldTest
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <FieldTest/FieldTest-Structs.h>
@class NSTimer, LogGenerator, NSMutableDictionary, FieldTestModelNode, NSDictionary;

@interface FieldTestModel : NSObject {

	CFMessagePortRef _recvPort;
	CFMessagePortRef _sendPort;
	NSTimer* _displayUpdateTimer;
	char _updated;
	LogGenerator* _logGenerator;
	NSMutableDictionary* _state;
	FieldTestModelNode* _nodes;
	NSDictionary* _nodesByPath;

}
-(void)restartMonitor;
-(id)getSaveContents;
-(id)nodeAtPath:(id)arg1 ;
-(void)destroyPorts;
-(void)startMonitor;
-(unsigned char)createPorts;
-(void)configureGenerator;
-(id)init;
-(void)dealloc;
-(void)refresh;
-(void)refresh:(id)arg1 ;
-(char)isConnected;
-(id)topLevelNodes;
-(void)updateWithData:(id)arg1 ;
@end

