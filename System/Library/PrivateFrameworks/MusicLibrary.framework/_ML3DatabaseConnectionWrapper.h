/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:49 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ML3DatabaseConnection, NSThread;

@interface _ML3DatabaseConnectionWrapper : NSObject {

	ML3DatabaseConnection* _connection;
	NSThread* _owningThread;
	NSThread* _borrowingThread;
	unsigned long long _useCount;

}

@property (nonatomic,retain) ML3DatabaseConnection * connection;              //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) NSThread * owningThread;                         //@synthesize owningThread=_owningThread - In the implementation block
@property (nonatomic,retain) NSThread * borrowingThread;                      //@synthesize borrowingThread=_borrowingThread - In the implementation block
@property (assign,nonatomic) unsigned long long useCount;                     //@synthesize useCount=_useCount - In the implementation block
-(void)setUseCount:(unsigned long long)arg1 ;
-(unsigned long long)useCount;
-(NSThread *)borrowingThread;
-(NSThread *)owningThread;
-(void)setConnection:(ML3DatabaseConnection *)arg1 ;
-(id)initWithConnection:(id)arg1 ;
-(void)setBorrowingThread:(NSThread *)arg1 ;
-(void)setOwningThread:(NSThread *)arg1 ;
-(id)description;
-(ML3DatabaseConnection *)connection;
@end
