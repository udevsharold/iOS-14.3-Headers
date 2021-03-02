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

@class TUHandle, NSString;

@interface TULabeledHandle : NSObject <NSCopying, NSSecureCoding> {

	BOOL _isSuggested;
	TUHandle* _handle;
	NSString* _label;

}

@property (nonatomic,readonly) TUHandle * handle;                  //@synthesize handle=_handle - In the implementation block
@property (nonatomic,copy,readonly) NSString * label;              //@synthesize label=_label - In the implementation block
@property (nonatomic,readonly) BOOL isSuggested;                   //@synthesize isSuggested=_isSuggested - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithHandle:(id)arg1 label:(id)arg2 isSuggested:(BOOL)arg3 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqualToLabeledHandle:(id)arg1 ;
-(TUHandle *)handle;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)label;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isSuggested;
@end
