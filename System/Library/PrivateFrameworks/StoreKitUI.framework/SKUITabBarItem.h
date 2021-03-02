/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:48 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIViewController, NSString, NSURL, UITabBarItem, UIColor;

@interface SKUITabBarItem : NSObject <NSCopying> {

	BOOL _alwaysCreatesRootViewController;
	long long _barTintStyle;
	UIViewController* _customRootViewController;
	NSString* _metricsIdentifier;
	NSURL* _rootURL;
	Class _rootViewControllerClass;
	NSString* _tabIdentifier;
	UITabBarItem* _underlyingTabBarItem;
	UIColor* _userInterfaceTintColor;

}

@property (nonatomic,readonly) NSString * tabIdentifier;                               //@synthesize tabIdentifier=_tabIdentifier - In the implementation block
@property (assign,nonatomic) BOOL alwaysCreatesRootViewController;                     //@synthesize alwaysCreatesRootViewController=_alwaysCreatesRootViewController - In the implementation block
@property (assign,nonatomic) long long barTintStyle;                                   //@synthesize barTintStyle=_barTintStyle - In the implementation block
@property (nonatomic,copy) NSString * metricsIdentifier;                               //@synthesize metricsIdentifier=_metricsIdentifier - In the implementation block
@property (nonatomic,copy) NSURL * rootURL;                                            //@synthesize rootURL=_rootURL - In the implementation block
@property (nonatomic,retain) UIViewController * customRootViewController;              //@synthesize customRootViewController=_customRootViewController - In the implementation block
@property (nonatomic,retain) Class rootViewControllerClass;                            //@synthesize rootViewControllerClass=_rootViewControllerClass - In the implementation block
@property (nonatomic,retain) UITabBarItem * underlyingTabBarItem;                      //@synthesize underlyingTabBarItem=_underlyingTabBarItem - In the implementation block
@property (nonatomic,retain) UIColor * userInterfaceTintColor;                         //@synthesize userInterfaceTintColor=_userInterfaceTintColor - In the implementation block
-(id)init;
-(void)setRootURL:(NSURL *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)barTintStyle;
-(unsigned long long)hash;
-(NSURL *)rootURL;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)tabIdentifier;
-(UITabBarItem *)underlyingTabBarItem;
-(UIViewController *)customRootViewController;
-(void)setUnderlyingTabBarItem:(UITabBarItem *)arg1 ;
-(BOOL)alwaysCreatesRootViewController;
-(Class)rootViewControllerClass;
-(NSString *)metricsIdentifier;
-(UIColor *)userInterfaceTintColor;
-(id)initWithTabIdentifier:(id)arg1 ;
-(void)setAlwaysCreatesRootViewController:(BOOL)arg1 ;
-(void)setBarTintStyle:(long long)arg1 ;
-(void)setCustomRootViewController:(UIViewController *)arg1 ;
-(void)setMetricsIdentifier:(NSString *)arg1 ;
-(void)setRootViewControllerClass:(Class)arg1 ;
-(void)setUserInterfaceTintColor:(UIColor *)arg1 ;
@end
