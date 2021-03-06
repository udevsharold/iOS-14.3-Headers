/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:16 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <WebKit/WKFormPeripheralBase.h>

@class NSString;

@interface WKFormSelectControl : WKFormPeripheralBase {

	RetainPtr<NSObject<WKFormControl> >* _control;

}

@property (nonatomic,readonly) NSString * selectFormPopoverTitle; 
-(id)initWithView:(id)arg1 ;
-(NSString *)selectFormPopoverTitle;
-(BOOL)selectFormAccessoryHasCheckedItemAtRow:(long long)arg1 ;
-(void)selectRow:(long long)arg1 inComponent:(long long)arg2 extendingSelection:(BOOL)arg3 ;
@end

