/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:04 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MRApplicationActivity.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface MRMutableApplicationActivity : MRApplicationActivity <NSSecureCoding>

@property (nonatomic,copy) NSString * primaryApplicationDisplayID; 
@property (nonatomic,copy) NSString * secondaryApplicationDisplayID; 
@property (assign,nonatomic) int status; 
+(BOOL)supportsSecureCoding;
-(void)setSecondaryApplicationDisplayID:(NSString *)arg1 ;
-(void)setPrimaryApplicationDisplayID:(NSString *)arg1 ;
-(void)setStatus:(int)arg1 ;
@end
