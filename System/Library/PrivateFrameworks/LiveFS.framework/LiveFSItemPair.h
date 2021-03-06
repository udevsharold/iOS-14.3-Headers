/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:10 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/LiveFS.framework/LiveFS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <LiveFS/LiveFS-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface LiveFSItemPair : NSObject <NSCopying> {

	NSString* _itemId;
	NSString* _filename;

}

@property (readonly) NSString * itemId;                //@synthesize itemId=_itemId - In the implementation block
@property (readonly) NSString * filename;              //@synthesize filename=_filename - In the implementation block
+(id)newWithParent:(id)arg1 fname:(id)arg2 ;
+(id)newWithParent:(id)arg1 fname:(id)arg2 caseSensitivity:(BOOL)arg3 ;
-(NSString *)filename;
-(NSString *)itemId;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithParent:(id)arg1 fname:(id)arg2 caseSensitivity:(BOOL)arg3 ;
@end

