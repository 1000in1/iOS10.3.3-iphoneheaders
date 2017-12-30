/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:20:47 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BaseBoard/BaseBoard-Structs.h>
#import <BaseBoard/BSSqlitePreparedStatement.h>
#import <libobjc.A.dylib/BSSqliteDatabaseConnectionObserver.h>

@class NSString;

@interface _BSSqlitePreparedSimpleStatement : BSSqlitePreparedStatement <BSSqliteDatabaseConnectionObserver> {

	sqlite3_stmtRef _statement;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithDatabaseConnection:(id)arg1 statement:(sqlite3_stmtRef)arg2 ;
-(int)_bindKey:(id)arg1 value:(id)arg2 ;
-(id)_sqliteError:(int)arg1 ;
-(int)_bindParameterIndex:(int)arg1 nullValue:(id)arg2 ;
-(int)_bindParameterIndex:(int)arg1 stringValue:(id)arg2 ;
-(int)_bindParameterIndex:(int)arg1 numberValue:(id)arg2 ;
-(int)_bindParameterIndex:(int)arg1 dataValue:(id)arg2 ;
-(void)sqliteDatabaseConnectionWillClose:(id)arg1 ;
-(void)dealloc;
-(char)executeWithBindings:(id)arg1 resultRowHandler:(/*^block*/id)arg2 error:(out id*)arg3 ;
@end

