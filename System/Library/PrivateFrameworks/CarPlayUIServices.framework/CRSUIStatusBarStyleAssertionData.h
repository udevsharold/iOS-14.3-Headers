/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:43 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CarPlayUIServices.framework/CarPlayUIServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface CRSUIStatusBarStyleAssertionData : NSObject {

	BOOL _siriPresentation;
	NSString* _identifier;
	long long _interfaceStyle;
	long long _contrast;

}

@property (nonatomic,retain) NSString * identifier;                                        //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) long long interfaceStyle;                                     //@synthesize interfaceStyle=_interfaceStyle - In the implementation block
@property (assign,nonatomic) long long contrast;                                           //@synthesize contrast=_contrast - In the implementation block
@property (assign,getter=isSiriPresentation,nonatomic) BOOL siriPresentation;              //@synthesize siriPresentation=_siriPresentation - In the implementation block
-(void)setInterfaceStyle:(long long)arg1 ;
-(long long)interfaceStyle;
-(long long)contrast;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(void)setContrast:(long long)arg1 ;
-(void)setSiriPresentation:(BOOL)arg1 ;
-(BOOL)isSiriPresentation;
@end

