/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:36 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, _SYSharedServiceDB;

@interface _SYWeakServiceDBRef : NSObject {

	NSString* _name;
	_SYSharedServiceDB* _db;

}

@property (nonatomic,copy) NSString * name;                               //@synthesize name=_name - In the implementation block
@property (assign,nonatomic,__weak) _SYSharedServiceDB * db;              //@synthesize db=_db - In the implementation block
-(void)setName:(NSString *)arg1 ;
-(id)initWithServiceName:(id)arg1 ;
-(void)setDb:(_SYSharedServiceDB *)arg1 ;
-(NSString *)name;
-(_SYSharedServiceDB *)db;
@end

