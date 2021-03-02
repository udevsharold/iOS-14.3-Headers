/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:47 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <libobjc.A.dylib/ICSQLiteBinding.h>

@class ICSQLiteConnection, NSDictionary, NSString;

@interface ICSQLiteStatement : NSObject <ICSQLiteBinding> {

	ICSQLiteConnection* _connection;
	sqlite3_stmtRef _statement;
	ICSQLiteStatement* _strongSelf;

}

@property (nonatomic,readonly) ICSQLiteConnection * connection;                    //@synthesize connection=_connection - In the implementation block
@property (nonatomic,readonly) sqlite3_stmtRef sqlite3_stmt;                       //@synthesize statement=_statement - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * columnIndexByName; 
@property (getter=isReadOnly,nonatomic,readonly) BOOL readOnly; 
@property (nonatomic,copy,readonly) NSString * SQL; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)bindFloat:(float)arg1 atPosition:(int)arg2 ;
-(void)bindStringCopy:(id)arg1 atPosition:(int)arg2 ;
-(sqlite3_stmtRef)sqlite3_stmt;
-(BOOL)isReadOnly;
-(void)bindDataCopy:(id)arg1 atPosition:(int)arg2 ;
-(NSString *)SQL;
-(void)bindString:(id)arg1 atPosition:(int)arg2 ;
-(int)finalizeStatement;
-(int)reset;
-(void)bindData:(id)arg1 atPosition:(int)arg2 ;
-(int)clearBindings;
-(void)bindDouble:(double)arg1 atPosition:(int)arg2 ;
-(id)initWithStatement:(sqlite3_stmtRef)arg1 connection:(id)arg2 ;
-(int)step;
-(void)bindInt64:(long long)arg1 atPosition:(int)arg2 ;
-(void)bindInt:(int)arg1 atPosition:(int)arg2 ;
-(ICSQLiteConnection *)connection;
-(void)bindNumber:(id)arg1 atPosition:(int)arg2 ;
-(NSDictionary *)columnIndexByName;
-(void)bindNullAtPosition:(int)arg1 ;
@end
