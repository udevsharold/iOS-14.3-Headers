/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:06 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableArray;

@interface HSCloudItemIDList : NSObject <NSSecureCoding> {

	NSMutableArray* _itemIDs;
	NSMutableArray* _idTypes;

}

@property (nonatomic,readonly) unsigned long long count; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)addCloudItemID:(unsigned long long)arg1 idType:(long long)arg2 ;
-(void)insertCloudItemID:(unsigned long long)arg1 idType:(long long)arg2 atIndex:(unsigned long long)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(void)enumerateCloudItemIDsUsingBlock:(/*^block*/id)arg1 ;
-(unsigned long long)count;
-(void)encodeWithCoder:(id)arg1 ;
@end
