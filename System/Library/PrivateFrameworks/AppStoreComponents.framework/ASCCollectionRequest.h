/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:32 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AppStoreComponents.framework/AppStoreComponents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppStoreComponents/AppStoreComponents-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface ASCCollectionRequest : NSObject <NSCopying, NSSecureCoding> {

	NSString* _id;
	NSString* _kind;
	NSString* _context;
	long long _limit;

}

@property (nonatomic,copy,readonly) NSString * id;                   //@synthesize id=_id - In the implementation block
@property (nonatomic,copy,readonly) NSString * kind;                 //@synthesize kind=_kind - In the implementation block
@property (nonatomic,copy,readonly) NSString * context;              //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) long long limit;                      //@synthesize limit=_limit - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)id;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)limit;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithID:(id)arg1 kind:(id)arg2 context:(id)arg3 limit:(long long)arg4 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)context;
-(NSString *)kind;
-(void)encodeWithCoder:(id)arg1 ;
@end

