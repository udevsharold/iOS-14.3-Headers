/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:09:06 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TouchRemote/TRRequestMessage.h>

@class NSString;

@interface TRLegacyAnisetteDataRequest : TRRequestMessage {

	NSString* _dsid;

}

@property (nonatomic,copy) NSString * dsid;              //@synthesize dsid=_dsid - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)dsid;
-(void)setDsid:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
@end
