/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:05:22 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/BarcodeSupport.framework/BarcodeSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BarcodeSupport/BarcodeSupport-Structs.h>
#import <BarcodeSupport/BCSAction.h>
#import <libobjc.A.dylib/BCSActionDelegate.h>

@class NSArray, DDScannerResult, CNContact, NSString;

@interface BCSDataDetectorsSupportedAction : BCSAction <BCSActionDelegate> {

	NSArray* _actions;
	DDScannerResult* _scannerResult;
	CNContact* _contact;
	NSString* _icsString;

}

@property (nonatomic,readonly) DDScannerResult * scannerResult;              //@synthesize scannerResult=_scannerResult - In the implementation block
@property (nonatomic,copy,readonly) CNContact * contact;                     //@synthesize contact=_contact - In the implementation block
@property (nonatomic,copy,readonly) NSString * icsString;                    //@synthesize icsString=_icsString - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)performAction;
-(id)localizedDefaultActionDescription;
-(id)defaultActionTargetApplicationBundleIdentifier;
-(id)actionPickerItems;
-(CNContact *)contact;
-(void)performDefaultAction;
-(id)url;
-(DDScannerResult *)scannerResult;
-(NSString *)icsString;
-(id)initWithData:(id)arg1 codePayload:(id)arg2 ;
-(void)determineActionabilityWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)localizedActionDescription;
-(id)debugDescriptionExtraInfoDictionary;
-(void)_performActionAndShowActionPickerIfNeeded:(BOOL)arg1 ;
-(id)_actionStringsArray;
@end

