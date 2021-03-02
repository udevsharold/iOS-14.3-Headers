/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:33 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSMutableDictionary;

@interface HKDisplayCategoryController : NSObject {

	NSMutableArray* _displayCategories;
	NSMutableDictionary* _displayCategoriesByCategoryID;

}
+(id)sharedInstance;
-(id)init;
-(id)categoryWithID:(long long)arg1 ;
-(void)_initializeDisplayCategories;
-(id)allDisplayCategories;
@end
