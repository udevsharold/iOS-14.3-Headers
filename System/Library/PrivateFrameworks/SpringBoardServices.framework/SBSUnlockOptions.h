/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:53:00 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BSXPCCoding.h>
#import <libobjc.A.dylib/BSXPCSecureCoding.h>

@class NSString;

@interface SBSUnlockOptions : NSObject <BSXPCCoding, BSXPCSecureCoding> {

	BOOL _aboveOtherContexts;

}

@property (assign,setter=_setAboveOtherContexts:,nonatomic) BOOL _aboveOtherContexts;              //@synthesize aboveOtherContexts=_aboveOtherContexts - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsBSXPCSecureCoding;
-(id)initWithBSXPCCoder:(id)arg1 ;
-(id)initWithXPCDictionary:(id)arg1 ;
-(void)encodeWithBSXPCCoder:(id)arg1 ;
-(BOOL)_aboveOtherContexts;
-(void)_setAboveOtherContexts:(BOOL)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
@end

