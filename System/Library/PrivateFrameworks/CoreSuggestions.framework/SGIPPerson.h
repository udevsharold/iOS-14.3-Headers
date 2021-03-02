/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:21 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreSuggestions/CoreSuggestions-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface SGIPPerson : NSObject <NSSecureCoding, NSCopying> {

	NSString* _name;
	NSString* _handle;
	NSString* _handleType;

}

@property (nonatomic,retain) NSString * name;                    //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSString * handle;                  //@synthesize handle=_handle - In the implementation block
@property (nonatomic,retain) NSString * handleType;              //@synthesize handleType=_handleType - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)personWithIPPerson:(id)arg1 ;
-(void)setHandle:(NSString *)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(id)toIPPerson;
-(BOOL)isEqualToPerson:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)handle;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)name;
-(NSString *)handleType;
-(void)setHandleType:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end
