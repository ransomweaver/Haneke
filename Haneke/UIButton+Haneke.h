//
//  UIButton+Haneke.h
//  Haneke
//
//  Created by Hermes Pique on 8/20/14.
//  Copyright (c) 2014 Hermes Pique. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "HNKCache.h"

@interface UIButton (Haneke)

#pragma mark Setting the content image

- (void)hnk_setImageFromURL:(NSURL*)URL forState:(UIControlState)state;

- (void)hnk_setImageFromURL:(NSURL*)URL forState:(UIControlState)state placeholderImage:(UIImage*)placeholderImage;

- (void)hnk_setImageFromURL:(NSURL*)URL forState:(UIControlState)state placeholderImage:(UIImage*)placeholderImage success:(void (^)(UIImage *image))successBlock failure:(void (^)(NSError *error))failureBlock;

- (void)hnk_setImageFromFile:(NSString*)path forState:(UIControlState)state;

- (void)hnk_setImageFromFile:(NSString*)path forState:(UIControlState)state placeholderImage:(UIImage*)placeholderImage;

- (void)hnk_setImageFromFile:(NSString*)path forState:(UIControlState)state placeholderImage:(UIImage*)placeholderImage success:(void (^)(UIImage *image))successBlock failure:(void (^)(NSError *error))failureBlock;

- (void)hnk_setImage:(UIImage*)image withKey:(NSString*)key forState:(UIControlState)state placeholderImage:(UIImage*)placeholderImage success:(void (^)(UIImage *image))successBlock failure:(void (^)(NSError *error))failureBlock;

- (void)hnk_setImageFromEntity:(id<HNKCacheEntity>)entity forState:(UIControlState)state placeholderImage:(UIImage*)placeholderImage success:(void (^)(UIImage *image))successBlock failure:(void (^)(NSError *error))failureBlock;

- (void)hnk_cancelSetImage;

@property (nonatomic, strong) HNKCacheFormat *hnk_imageCacheFormat;

#pragma mark Setting the background image

- (void)hnk_setBackgroundImageFromURL:(NSURL*)URL forState:(UIControlState)state;

- (void)hnk_setBackgroundImageFromURL:(NSURL*)URL forState:(UIControlState)state placeholderImage:(UIImage*)placeholderImage;

- (void)hnk_setBackgroundImageFromURL:(NSURL*)URL forState:(UIControlState)state placeholderImage:(UIImage*)placeholderImage success:(void (^)(UIImage *image))successBlock failure:(void (^)(NSError *error))failureBlock;

- (void)hnk_setBackgroundImageFromFile:(NSString*)path forState:(UIControlState)state;

- (void)hnk_setBackgroundImageFromFile:(NSString*)path forState:(UIControlState)state placeholderImage:(UIImage*)placeholderImage;

- (void)hnk_setBackgroundImageFromFile:(NSString*)path forState:(UIControlState)state placeholderImage:(UIImage*)placeholderImage success:(void (^)(UIImage *image))successBlock failure:(void (^)(NSError *error))failureBlock;

- (void)hnk_setBackgroundImage:(UIImage*)image withKey:(NSString*)key forState:(UIControlState)state placeholderImage:(UIImage*)placeholderImage success:(void (^)(UIImage *image))successBlock failure:(void (^)(NSError *error))failureBlock;

- (void)hnk_setBackgroundImageFromEntity:(id<HNKCacheEntity>)entity forState:(UIControlState)state placeholderImage:(UIImage*)placeholderImage success:(void (^)(UIImage *image))successBlock failure:(void (^)(NSError *error))failureBlock;

- (void)hnk_cancelSetBackgroundImage;

@property (nonatomic, strong) HNKCacheFormat *hnk_backgroundImageCacheFormat;

@end