/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:12 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol EDSearchableIndexSchedulable <NSObject>
@property (assign,getter=isDataSourceIndexingPermitted,nonatomic) BOOL dataSourceIndexingPermitted; 
@property (getter=isPluggedIn,nonatomic,readonly) BOOL pluggedIn; 
@property (nonatomic,copy,readonly) NSString * indexName; 
@property (nonatomic,readonly) unsigned long long pendingIndexItemsCount; 
@required
-(BOOL)isPluggedIn;
-(NSString *)indexName;
-(unsigned long long)pendingIndexItemsCount;
-(BOOL)isDataSourceIndexingPermitted;
-(void)setDataSourceIndexingPermitted:(BOOL)arg1;

@end

