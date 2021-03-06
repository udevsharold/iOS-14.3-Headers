/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:36 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PromotedContent.framework/PromotedContent
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PromotedContent/PromotedContent-Structs.h>
#import <libobjc.A.dylib/APPCPromotableContentRepresentation.h>

@class NSString, APPCTapAction;

@interface APPCContentRepresentation : NSObject <APPCPromotableContentRepresentation> {

	 identifier;
	 adType;
	 desiredPosition;
	 privacyMarkerPosition;
	 adSize;
	 tapAction;

}

@property (readonly,nonatomic) NSString * identifier; 
@property (readonly,nonatomic) long long adType; 
@property (readonly,nonatomic) long long desiredPosition; 
@property (readonly,nonatomic) long long privacyMarkerPosition; 
@property (readonly,nonatomic) CGSize adSize; 
@property (readonly,nonatomic) APPCTapAction * tapAction; 
-(id)init;
-(void)performActionWithCompletion:(/*^block*/id)arg1 ;
-(long long)adType;
-(CGSize)adSize;
-(NSString *)identifier;
-(long long)privacyMarkerPosition;
-(long long)desiredPosition;
-(APPCTapAction *)tapAction;
@end

