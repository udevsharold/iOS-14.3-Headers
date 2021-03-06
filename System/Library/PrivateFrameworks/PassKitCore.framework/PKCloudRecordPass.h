/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:02 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKCloudRecordObject.h>

@class PKPass;

@interface PKCloudRecordPass : PKCloudRecordObject {

	PKPass* _pass;

}

@property (nonatomic,retain) PKPass * pass;              //@synthesize pass=_pass - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)item;
-(long long)compare:(id)arg1 ;
-(void)setPass:(PKPass *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(id)descriptionWithItem:(BOOL)arg1 ;
-(void)applyCloudRecordObject:(id)arg1 ;
-(PKPass *)pass;
-(void)encodeWithCoder:(id)arg1 ;
-(id)_descriptionWithIncludeItem:(BOOL)arg1 ;
@end

