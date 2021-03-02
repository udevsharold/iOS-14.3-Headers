/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:11 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/FCCommand.h>

@class NSString;

@interface FCModifyNotificationsForMarketingCommand : FCCommand {

	int _type;
	int _action;
	NSString* _dsid;

}

@property (assign,nonatomic) int type;                   //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) int action;                 //@synthesize action=_action - In the implementation block
@property (nonatomic,copy) NSString * dsid;              //@synthesize dsid=_dsid - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)dsid;
-(void)setDsid:(NSString *)arg1 ;
-(void)setType:(int)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setAction:(int)arg1 ;
-(int)type;
-(id)initWithType:(int)arg1 action:(int)arg2 iTunesDSID:(id)arg3 ;
-(int)action;
-(void)executeWithContext:(id)arg1 delegate:(id)arg2 qualityOfService:(long long)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
@end
