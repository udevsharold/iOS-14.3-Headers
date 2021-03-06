/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:49 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DataDetectorsUI/DataDetectorsUI-Structs.h>
#import <DataDetectorsUI/DDAction.h>

@class NSString;

@interface DDTelephoneNumberAction : DDAction {

	NSString* _phoneNumber;
	NSString* _body;

}
-(id)icon;
-(id)initWithURL:(id)arg1 result:(_DDResult*)arg2 context:(id)arg3 ;
-(id)contactsMatchingPhoneNumber:(id)arg1 inContactStore:(id)arg2 ;
-(id)labelToUseForEmail:(id)arg1 ofContact:(id)arg2 ;
-(id)labelToUseForPhoneNumber:(id)arg1 ofContact:(id)arg2 ;
-(id)contactAndLabelForPhoneNumber:(id*)arg1 ;
@end

