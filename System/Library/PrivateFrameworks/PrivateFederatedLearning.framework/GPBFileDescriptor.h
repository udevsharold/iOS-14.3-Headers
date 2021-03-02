/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:30 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PrivateFederatedLearning.framework/PrivateFederatedLearning
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface GPBFileDescriptor : NSObject {

	NSString* package_;
	NSString* objcPrefix_;
	unsigned char syntax_;

}

@property (nonatomic,copy,readonly) NSString * package; 
@property (nonatomic,copy,readonly) NSString * objcPrefix; 
@property (nonatomic,readonly) unsigned char syntax; 
-(NSString *)package;
-(void)dealloc;
-(id)initWithPackage:(id)arg1 objcPrefix:(id)arg2 syntax:(unsigned char)arg3 ;
-(unsigned char)syntax;
-(id)initWithPackage:(id)arg1 syntax:(unsigned char)arg2 ;
-(NSString *)objcPrefix;
@end
