/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:01 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSString;

@interface PKPeerPaymentRequiredFieldsPage : NSObject {

	NSArray* _requiredFields;
	NSString* _localizedTitle;
	NSString* _localizedDescription;

}

@property (nonatomic,retain) NSArray * requiredFields;                   //@synthesize requiredFields=_requiredFields - In the implementation block
@property (nonatomic,copy) NSString * localizedTitle;                    //@synthesize localizedTitle=_localizedTitle - In the implementation block
@property (nonatomic,copy) NSString * localizedDescription;              //@synthesize localizedDescription=_localizedDescription - In the implementation block
-(NSString *)localizedTitle;
-(void)setLocalizedTitle:(NSString *)arg1 ;
-(NSString *)localizedDescription;
-(id)initWithDictionary:(id)arg1 fieldOptions:(id)arg2 ;
-(void)setRequiredFields:(NSArray *)arg1 ;
-(void)setLocalizedDescription:(NSString *)arg1 ;
-(NSArray *)requiredFields;
@end
