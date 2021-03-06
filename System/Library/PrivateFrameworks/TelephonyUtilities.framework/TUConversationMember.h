/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:12 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TelephonyUtilities/TelephonyUtilities-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class TUHandle, NSString, NSArray, NSSet;

@interface TUConversationMember : NSObject <NSCopying, NSSecureCoding> {

	TUHandle* _handle;

}

@property (nonatomic,copy,readonly) NSString * idsDestination; 
@property (nonatomic,copy,readonly) NSArray * idsDestinations; 
@property (nonatomic,readonly) TUHandle * handle;                           //@synthesize handle=_handle - In the implementation block
@property (nonatomic,copy,readonly) NSSet * handles; 
+(BOOL)supportsSecureCoding;
-(NSSet *)handles;
-(id)initWithHandle:(id)arg1 ;
-(id)initWithDestination:(id)arg1 ;
-(id)initWithContact:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)idsDestination;
-(TUHandle *)handle;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithDestinations:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithHandles:(id)arg1 ;
-(id)initWithContact:(id)arg1 additionalHandles:(id)arg2 ;
-(BOOL)isEqualToMember:(id)arg1 ;
-(NSArray *)idsDestinations;
-(BOOL)representsSameMemberAs:(id)arg1 ;
@end

