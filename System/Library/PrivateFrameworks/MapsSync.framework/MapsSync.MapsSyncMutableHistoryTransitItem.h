/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:01 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/MapsSync.framework/MapsSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsSync/MapsSync.MapsSyncMutableHistoryItem.h>

@class NSData;

@interface MapsSync.MapsSyncMutableHistoryTransitItem : MapsSync.MapsSyncMutableHistoryItem {

	 _proxyHistory;

}

@property (copy,nonatomic) NSData * transitLineItemStorageData; 
@property (assign,nonatomic) unsigned long long muid; 
-(unsigned long long)muid;
-(void)setMuid:(unsigned long long)arg1 ;
-(id)initWithProxyObject:(id)arg1 ;
-(NSData *)transitLineItemStorageData;
-(void)setTransitLineItemStorageData:(NSData *)arg1 ;
@end

