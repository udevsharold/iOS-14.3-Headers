/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:12 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TelephonyUtilities/TelephonyUtilities-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class TUHandle, NSString;

@interface TUMetadataDestinationID : NSObject <NSSecureCoding, NSCopying> {

	TUHandle* _handle;

}

@property (nonatomic,readonly) TUHandle * handle;                           //@synthesize handle=_handle - In the implementation block
@property (nonatomic,copy,readonly) NSString * isoCountryCode; 
+(BOOL)supportsSecureCoding;
+(id)metadataDestinationIDForCall:(id)arg1 ;
+(id)metadataDestinationIDsForCHRecentCalls:(id)arg1 ;
+(id)metadataDestinationIDsForCHRecentCall:(id)arg1 ;
-(NSString *)isoCountryCode;
-(id)initWithHandle:(id)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithDestinationID:(id)arg1 isoCountryCode:(id)arg2 ;
-(TUHandle *)handle;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)isEqualToMetadataDestinationID:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end
